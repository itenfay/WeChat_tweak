//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIView;
@protocol TextStateFriendSquareTransitionCardList, TextStateFriendSquareTransitionFriendSquare;

@interface _TtC6WeChat31TextStateFriendSquareTransition : NSObject
{
    MISSING_TYPE *friendSquare;
    MISSING_TYPE *cardList;
    MISSING_TYPE *username;
    MISSING_TYPE *dismissUsername;
}

- (void).cxx_destruct;
- (id)init;
- (void)onDidCancelInternalDismiss;
- (void)onWillEndInternalDismiss;
- (void)onWillBeginInternalDismiss;
@property(nonatomic, readonly) UIView *internalDismissHeadImage;
@property(nonatomic, copy) NSString *dismissUsername;
@property(nonatomic, copy) NSString *username;
- (id)initWithFriendSquare:(id)arg1 cardList:(id)arg2;
@property(nonatomic) __weak id <TextStateFriendSquareTransitionCardList> cardList; // @synthesize cardList;
@property(nonatomic) __weak id <TextStateFriendSquareTransitionFriendSquare> friendSquare; // @synthesize friendSquare;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

@end

