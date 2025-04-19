use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
    println!("Hello, world!");

    let mut input = String::new(); // non allocated / null

    loop {
        input.clear(); // readlines adds to existing var 
        io::stdin()
            .read_line(&mut input) // ok or Err
            .expect("Failed to read line");

        let s = rand::thread_rng().gen_range(1..=10); // 1..=10 is inclusive

        let input: u32 = match input.trim().parse() {   // parse return OK or Err, match return value
            Ok(num) => num,
            Err(_) => continue, // any other return  _
        };
        match input.cmp(&s) { // cmp returns Ordering value
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("You win!");
                break;
            }
        }
        println!("You entered: {}", input);
        println!("res = {s}")
    }
}

/*
    We can create a project using cargo new.
    We can build a project using cargo build.
    We can build and run a project in one step using cargo run.
    We can build a project without producing a binary to check for errors using cargo check.
    Instead of saving the result of the build in the same directory as our code, Cargo stores it in the target/debug directory.
    We can build a release version of our project using cargo build --release. optimized for speed.
*/

/*
trim() -  remove trailing whitespaces, \n, \r
parse() -  convert dtype
input.cmp(&s) will make s u32 as well by inference
*/
