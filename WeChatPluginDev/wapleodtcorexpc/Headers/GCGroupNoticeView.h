//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString, RichTextView;
@protocol GCGroupNoticeViewDelegate;

@interface GCGroupNoticeView : UIView
{
    RichTextView *_richTextView;
    NSMutableDictionary *_linkJumpInfoDict;
    id <GCGroupNoticeViewDelegate> _delegate;
}

+ (id)getFakeNotice;
+ (id)getHalfScreen;
+ (id)getTestJumpInfo;
+ (id)backEndColorFromColor:(id)arg1;
+ (id)backEndColorFromColorStr:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GCGroupNoticeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *linkJumpInfoDict; // @synthesize linkJumpInfoDict=_linkJumpInfoDict;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)onNoticeCloseBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)linkBlockForUrl:(id)arg1;
- (id)getContentStrFromContentBlockList:(id)arg1;
- (id)rgbaStrFromArgbStr:(id)arg1;
- (id)rgbaStrFromBackEndColor:(id)arg1;
- (id)initWithWidth:(double)arg1 chatRoomNotice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

