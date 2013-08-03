//
//  RESideMenu.h
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "UIWindow+RESideMenuExtensions.h"
#import "REBackgroundView.h"
#import "RESideMenuCell.h"
#import "RESideMenuItem.h"

@interface RESideMenu : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (strong, readonly, nonatomic) NSArray *items;
@property (assign, readwrite, nonatomic) CGFloat verticalOffset;
@property (assign, readwrite, nonatomic) CGFloat horizontalOffset;
@property (assign, readwrite, nonatomic) CGFloat itemHeight;
@property (strong, readwrite, nonatomic) UIFont *font;
@property (strong, readwrite, nonatomic) UIColor *textColor;
@property (strong, readwrite, nonatomic) UIColor *highlightedTextColor;
@property (strong, readwrite, nonatomic) UIImage *backgroundImage;
@property (assign, readwrite, nonatomic) BOOL hideStatusBarArea;
@property (assign, readwrite, nonatomic) BOOL isShowing;

- (id)initWithItems:(NSArray *)items;
- (void)show;
- (void)hide;
- (void)setRootViewController:(UIViewController *)viewController;

@end
