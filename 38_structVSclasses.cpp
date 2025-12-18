

// ## 🔑 Key Difference: Default Access

// The only technical difference between a `class` and a `struct` in C++ is the **default access level** for their members and their base classes in inheritance.

// |        Feature            |    `class`    |   `struct`   |
// |                           |               |              |
// | **Default Member Access** | **`private`** | **`public`** |
// | **Default Inheritance**   | **`private`** | **`public`** |

// ### 1. Default Member Access

//   * **`class`**: If you declare members without explicitly using `public:`, `protected:`, or `private:`, they are treated as **`private`** by default. This enforces **encapsulation** right out of the box.

//     ```cpp
//     class Point {
//         int x; // <--- This is PRIVATE by default
//     public:
//         Point(int val) : x(val) {}
//     };
//     // Cannot access: Point p(5); p.x; // Error
//     ```

//   * **`struct`**: If you declare members without an access specifier, they are treated as **`public`** by default.

//     ```cpp
//     struct Point {
//         int x; // <--- This is PUBLIC by default
//     public:
//         Point(int val) : x(val) {}
//     };
//     // Can access: Point p(5); p.x; // Works
//     ```

// ### 2. Default Inheritance Access

//   * **`class`**: If you inherit from a base class without specifying `public`, `protected`, or `private` inheritance, the inheritance is **`private`** by default.
//   * **`struct`**: If you inherit from a base class without an access specifier, the inheritance is **`public`** by default.

// -----

// ## 💻 Usage Convention (The Real Difference)

// While you *can* use either keyword interchangeably by explicitly setting access specifiers (e.g., a `struct` with all `private` members is functionally identical to a `class`), the C++ community follows a strong convention:

//   * **Use `class` for objects with complex behavior.**

//       * Typically used for objects that require **encapsulation**, have constructors/destructors, contain methods (functions), and maintain complex internal state.
//       * The intent is to hide implementation details (`private` default) and expose a controlled public interface.

//   * **Use `struct` for simple data containers.**

//       * Traditionally used for Plain Old Data (POD) structures or simple aggregates that primarily hold data and where direct member access is often desired.
//       * The intent is to group data together with minimal or no methods, acting much like a structure in the C language.