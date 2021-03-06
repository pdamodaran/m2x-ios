
#import <UIKit/UIKit.h>
#import "DataSourceClient.h"

@interface CreateBatchViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *tfName;
@property (weak, nonatomic) IBOutlet UITextField *tfDescription;
@property (weak, nonatomic) IBOutlet UISegmentedControl *smtVisibility;
@property (nonatomic, strong) DataSourceClient *dataSourceClient;

@end
