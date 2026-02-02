#include "notif.h"
#include "follower.h"

int main(){
    Notificator n;
    Follower a("A");
    Follower b("B");
    Follower c("C");
    n.add(&a);
    n.add(&b);
    n.add(&c);
    n.print();
    n.post("hello hello");
    n.remove(&b);
    n.post("foo bar");
    return 0;
}