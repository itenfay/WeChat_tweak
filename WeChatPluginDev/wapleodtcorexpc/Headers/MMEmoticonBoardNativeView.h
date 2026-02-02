//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonBoardView, MMEmoticonBoardNativeViewContext, NSString;

@interface MMEmoticonBoardNativeView : NSObject
{
    MMEmoticonBoardNativeViewContext *_context;
    EmoticonBoardView *_emoticonBoardView;
}

+ (id)typeForData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) MMEmoticonBoardNativeViewContext *context; // @synthesize context=_context;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (id)GetCurrentViewController;
- (void)onEmoticonSearchIconClicked;
- (void)checkAndCallSelectEmoticonMethod:(id)arg1;
- (void)callSelectEmoticonMethod:(id)arg1;
- (id)selectEmoticonArgumentsFromEmoticon:(id)arg1 useThumbImage:(_Bool)arg2;
- (id)view;
- (id)createEmoticonBoardView;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

