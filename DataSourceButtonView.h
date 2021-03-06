@import UIKit;

typedef void(^buttonCb)(NSString*, NSString*);

@interface DataSourceButtonView : UIView

- (id)initWithCallback:(buttonCb)cb;
- (void)loadButtonsWithCallback:(buttonCb)cb;

@end
