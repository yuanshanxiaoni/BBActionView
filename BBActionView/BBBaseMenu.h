
/*_______________________________________________________________________
 _________________________________________________________________________
 ___________________________________________.._.vr________________________
 _________________________________________qBMBBBMBMY______________________
 ________________________________________8BBBBBOBMBMv_____________________
 ______________________________________iMBMM5vOY:BMBBv____________________
 ______________________.r,_____________OBM;___.:_rBBBBBY__________________
 ______________________vUL_____________7BB___.;7._LBMMBBM.________________
 _____________________.@Wwz.___________:uvir_.i:.iLMOMOBM.._______________
 ______________________vv::r;_____________iY._...rv,@arqiao.______________
 _______________________Li._i:_____________v:.::::7vOBBMBL..______________
 _______________________,i7:_vSUi,_________:M7.:.,:u08OP._._______________
 _________________________.N2k5u1ju7,.._____BMGiiL7___,i,i._______________
 __________________________:rLjFYjvjLY7r::.__;v__vr..._rE8q;.:,,__________
 _________________________751jSLXPFu5uU@guohezou.,1vjY2E8@Yizero._________
 _________________________BB:FMu_rkM8Eq0PFjF15FZ0Xu15F25uuLuu25Gi.________
 _______________________ivSvvXL____:v58ZOGZXF2UUkFSFkU1u125uUJUUZ,________
 _____________________:@kevensun.______,iY20GOXSUXkSuS2F5XXkUX5SEv._______
 _________________.:i0BMBMBBOOBMUi;,________,;8PkFP5NkPXkFqPEqqkZu._______
 _______________.rqMqBBMOMMBMBBBM_.___________@kexianli.S11kFSU5q5________
 _____________.7BBOi1L1MM8BBBOMBB..,__________8kqS52XkkU1Uqkk1kUEJ________
 _____________.;MBZ;iiMBMBMMOBBBu_,___________1OkS1F1X5kPP112F51kU________
 _______________.rPY__OMBMBBBMBB2_,.__________rME5SSSFk1XPqFNkSUPZ,.______
 ______________________;;JuBML::r:.:.,,________SZPX0SXSP5kXGNP15UBr.______
 __________________________L,____:@huhao.______:MNZqNXqSqXk2E0PSXPE_._____
 ______________________viLBX.,,v8Bj._i:r7:,_____2Zkqq0XXSNN0NOXXSXOU______
 ____________________:r2._rMBGBMGi_.7Y,_1i::i___vO0PMNNSXXEqP@Secbone.____
 ____________________.i1r._.jkY,____vE._iY....__20Fq0q5X5F1S2F22uuv1M;____
 _________________________________________________________________________
 _________________________________________________________________________
 _______________________________________________________________________*/

#import <UIKit/UIKit.h>
#import "BBActionView.h"
#import "BBMenuHeaderView.h"

#define BaseMenuBackgroundColor(style)  (style == SGActionViewStyleLight ? [UIColor colorWithWhite:1.0 alpha:1.0] : [UIColor colorWithWhite:0.2 alpha:1.0])
#define BaseMenuTextColor(style)        (style == SGActionViewStyleLight ? [UIColor darkTextColor] : [UIColor lightTextColor])
#define BaseMenuActionTextColor(style)  ([UIColor colorWithRed:0.0 green:122.0/255.0 blue:1.0 alpha:1.0])

#define SCREEN_HEIGHT     [[UIScreen mainScreen] bounds].size.height
#define SCREEN_WIDTH      [[UIScreen mainScreen] applicationFrame].size.width
#define SCREEN_APP_HEIGHT [[UIScreen mainScreen] applicationFrame].size.height

typedef enum _GridBtnType_ {
    GridBtnEventShare            = 1U << 0,
    GridBtnEventGetOnRemind      = 1U << 1,
    GridBtnEventGetOffRemind     = 1U << 2,
    GridBtnEventCollectLine      = 1U << 3,
    GridBtnEventCollectLocation  = 1U << 4,
    GridBtnEventCollectStation   = 1U << 5,
    GridBtnEventSetAsBegin       = 1U << 6,
    GridBtnEventSetAsEnd         = 1U << 7,
}GridBtnType;

///////////////////////////////////////////////////////////
///   BBButton
///////////////////////////////////////////////////////////
@interface BBButton : UIButton
@end


///////////////////////////////////////////////////////////
///   BBBaseMenu
///////////////////////////////////////////////////////////
@interface BBBaseMenu : UIView

// if rounded top left/right corner, default is YES.
@property (nonatomic, assign) BOOL roundedCorner;

@end

///////////////////////////////////////////////////////////
///   BBGridItem
///////////////////////////////////////////////////////////
@interface BBGridItem : UIButton

@property (nonatomic, assign) int eventNum;
@property (nonatomic, weak) BBBaseMenu *menu;

- (id)initWithTitle:(NSString *)title image:(UIImage *)image;

@end

