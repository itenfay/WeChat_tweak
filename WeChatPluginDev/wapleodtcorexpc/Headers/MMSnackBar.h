//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMSnackBarConfig, NSOperation, UIViewController;

@interface MMSnackBar : NSObject
{
    MMSnackBarConfig *_config;
    CDUnknownBlockType _actionHandlerBlock;
    CDUnknownBlockType _willAppearHandlerBlock;
    UIViewController *_currentViewController;
    NSOperation *_afterHideOperation;
}

+ (id)snackBar;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperation *afterHideOperation; // @synthesize afterHideOperation=_afterHideOperation;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(copy, nonatomic) CDUnknownBlockType willAppearHandlerBlock; // @synthesize willAppearHandlerBlock=_willAppearHandlerBlock;
@property(copy, nonatomic) CDUnknownBlockType actionHandlerBlock; // @synthesize actionHandlerBlock=_actionHandlerBlock;
@property(retain, nonatomic) MMSnackBarConfig *config; // @synthesize config=_config;
- (CDUnknownBlockType)cleanSnackBar;
- (id)displayingSnackBarVC;
- (id)getCurrentTopViewController;
- (void)setInteractionBlocked;
- (void)setInteractionEnabled;
- (void)privateHideSnackBar:(CDUnknownBlockType)arg1;
- (void)privateUpdateSnackBar;
- (void)privateShowSnackBar;
- (CDUnknownBlockType)hideSnackBar;
- (CDUnknownBlockType)updateSnackBar;
- (CDUnknownBlockType)showSnackBar;
- (CDUnknownBlockType)willAppearHandler;
- (CDUnknownBlockType)actionHandler;
- (CDUnknownBlockType)currentVC;
- (CDUnknownBlockType)bottomOffset;
- (CDUnknownBlockType)voiceOverLabel;
- (CDUnknownBlockType)voiceOverHint;
- (CDUnknownBlockType)actionAttrTitle;
- (CDUnknownBlockType)actionTitle;
- (CDUnknownBlockType)actionIconName;
- (CDUnknownBlockType)block;
- (CDUnknownBlockType)loading;
- (CDUnknownBlockType)attrTitle;
- (CDUnknownBlockType)titleStr;
- (CDUnknownBlockType)iconName;
- (id)init;

@end

