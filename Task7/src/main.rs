extern crate regex;
use regex::Regex;

pub fn main() {
  println!("Enter E-mail ID ");

  let mut email = String::new();

  std::io::stdin().read_line(&mut email).unwrap();

  let re = Regex::new(r"^[A-Za-z0-9-\\+]+(\\.[A-Za-z0-9-]+)*@[A-Za-z0-9]+(\\.[A-Za-z0-9]{3,}+)*(\\.[A-Za-z]{2,})$").unwrap();

  println!("valid email-{}", re.is_match(email));
}
