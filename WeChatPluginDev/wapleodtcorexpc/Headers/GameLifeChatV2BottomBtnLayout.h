//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GameLifeChatV2BottomBtnLayout
{
    double _imgTitleMargin;
    GCLabelDynamicLayout *_btnLabelLayout;
    double _btnTitleVerticalMargin;
    double _btnHeight;
    double _thinImgTopMargin;
    double _thinImgBtnSpace;
    double _thinBtnHeight;
    GCLabelDynamicLayout *_noticeLabelLayout;
    struct CGSize _imgSize;
    struct CGSize _thinImgSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLabelDynamicLayout *noticeLabelLayout; // @synthesize noticeLabelLayout=_noticeLabelLayout;
@property(nonatomic) double thinBtnHeight; // @synthesize thinBtnHeight=_thinBtnHeight;
@property(nonatomic) double thinImgBtnSpace; // @synthesize thinImgBtnSpace=_thinImgBtnSpace;
@property(nonatomic) double thinImgTopMargin; // @synthesize thinImgTopMargin=_thinImgTopMargin;
@property(nonatomic) struct CGSize thinImgSize; // @synthesize thinImgSize=_thinImgSize;
@property(nonatomic) double btnHeight; // @synthesize btnHeight=_btnHeight;
@property(nonatomic) double btnTitleVerticalMargin; // @synthesize btnTitleVerticalMargin=_btnTitleVerticalMargin;
@property(retain, nonatomic) GCLabelDynamicLayout *btnLabelLayout; // @synthesize btnLabelLayout=_btnLabelLayout;
@property(nonatomic) double imgTitleMargin; // @synthesize imgTitleMargin=_imgTitleMargin;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
- (id)init;

@end

