//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifeScrollActionSheet;

@interface NewLifeFeedScrollActionDelegateObject : NSObject
{
    NewLifeScrollActionSheet *_actionSheet;
    NSString *_mpUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
@property(nonatomic) __weak NewLifeScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)originalArticleRowViewDidClick:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

