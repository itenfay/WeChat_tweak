#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CommonMessageCellView;

@interface WCHookMessageNavigator : NSObject

+ (BOOL)senderLooksLikeReferView:(id)sender;
+ (BOOL)tryJumpFromCell:(CommonMessageCellView *)cell;
+ (BOOL)tryJumpFromInputTool:(id)toolView;
+ (BOOL)tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)cell;
+ (BOOL)tryJumpFromRevokeTipCell:(CommonMessageCellView *)cell;
+ (BOOL)tryJumpFromRevokeTipMessageWrap:(id)messageWrap locateTarget:(id)locateTarget;

@end

NS_ASSUME_NONNULL_END
