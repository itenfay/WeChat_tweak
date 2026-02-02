//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView;

@interface WCCanvasTextAreaComponent
{
    RichTextView *_contentLabel;
}

+ (struct CGSize)calcContentSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3 width:(double)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
+ (id)getRichTextFromSvrResponse:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void)alignTextWithHorizontalAlign:(long long)arg1 verticalAlign:(long long)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)downloadAllIconImage;
- (void)adjustOneLineStyles:(id)arg1 inRect:(struct CGRect)arg2;
- (void)alignTextToCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

