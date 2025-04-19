fn main() {
    let x = 5;
    // cant do x = b, immutable by default,
    let mut y = 5;
    y += 1;
    println!("{x}\n{y}");
    {
        let x = x+1;
        println!("{x} immutable but not in shadowwed scope with let")
    }
    const Z:i32 = 3*12;  // const always immut, must have specific type and not result of expression
    let c = 'z';
    let z: char = 'ℤ'; 

    let tup: (u32,i32,f64) = (2, -5, 1.1);
    // destruct
    let (a,b,c) = tup;
    println!("{} {}", a,tup.0);
    println!("{:?}",tup);
    let a: [i32; 5] = [1, 2, 3, 4, 5];
    // init with same values
    println!("{:?}",a);
    let a = [3; 5];
    println!("{:?}",a)

}

/*
dtypes -static

scalars : integer { i8 -  i128} or isize (architecture based) with equiv. unsigned usize
overflow - error in debug, wrap in release

floats : f32, f64
bool : 8bit


compounds : 

tupple : fixed length group of diff vars
array: same types,
*/
