//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout, UIFont;

@interface GCChatBaseCellModelCommonLayout
{
    double _headImgTopOffset;
    double _nameLineHeight;
    double _nameLabelFontSize;
    UIFont *_nameLabelFont;
    double _textFontSize;
    double _textLineHeight;
    double _roleLabelPadding;
    double _roleLabelFontSize;
    double _roleIconSize;
    double _roleIconLabelSpace;
    double _noticeLabelFontSize;
    double _headImgWidth;
    double _ticklePagWidth;
    double _ticklePagHeight;
    double _statusBgWidth;
    double _statusImgWidth;
    double _sendFailViewWidth;
    GCLabelDynamicLayout *_btmVoteTipLayout;
    double _voteFameHeight;
    double _choosenPublishBarHeight;
    GCLabelDynamicLayout *_channelLabelLayout;
    double _cellChannelSharpImgSpace;
    double _sharpImgWidth;
    double _channelLabelBtmMargin;
    struct UIEdgeInsets _contentMarginInsets;
    struct UIEdgeInsets _emoticonMarginInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double channelLabelBtmMargin; // @synthesize channelLabelBtmMargin=_channelLabelBtmMargin;
@property(nonatomic) double sharpImgWidth; // @synthesize sharpImgWidth=_sharpImgWidth;
@property(nonatomic) double cellChannelSharpImgSpace; // @synthesize cellChannelSharpImgSpace=_cellChannelSharpImgSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *channelLabelLayout; // @synthesize channelLabelLayout=_channelLabelLayout;
@property(nonatomic) double choosenPublishBarHeight; // @synthesize choosenPublishBarHeight=_choosenPublishBarHeight;
@property(nonatomic) double voteFameHeight; // @synthesize voteFameHeight=_voteFameHeight;
@property(retain, nonatomic) GCLabelDynamicLayout *btmVoteTipLayout; // @synthesize btmVoteTipLayout=_btmVoteTipLayout;
@property(nonatomic) double sendFailViewWidth; // @synthesize sendFailViewWidth=_sendFailViewWidth;
@property(nonatomic) double statusImgWidth; // @synthesize statusImgWidth=_statusImgWidth;
@property(nonatomic) double statusBgWidth; // @synthesize statusBgWidth=_statusBgWidth;
@property(nonatomic) double ticklePagHeight; // @synthesize ticklePagHeight=_ticklePagHeight;
@property(nonatomic) double ticklePagWidth; // @synthesize ticklePagWidth=_ticklePagWidth;
@property(nonatomic) double headImgWidth; // @synthesize headImgWidth=_headImgWidth;
@property(nonatomic) double noticeLabelFontSize; // @synthesize noticeLabelFontSize=_noticeLabelFontSize;
@property(nonatomic) double roleIconLabelSpace; // @synthesize roleIconLabelSpace=_roleIconLabelSpace;
@property(nonatomic) double roleIconSize; // @synthesize roleIconSize=_roleIconSize;
@property(nonatomic) double roleLabelFontSize; // @synthesize roleLabelFontSize=_roleLabelFontSize;
@property(nonatomic) double roleLabelPadding; // @synthesize roleLabelPadding=_roleLabelPadding;
@property(nonatomic) double textLineHeight; // @synthesize textLineHeight=_textLineHeight;
@property(nonatomic) double textFontSize; // @synthesize textFontSize=_textFontSize;
@property(retain, nonatomic) UIFont *nameLabelFont; // @synthesize nameLabelFont=_nameLabelFont;
@property(nonatomic) double nameLabelFontSize; // @synthesize nameLabelFontSize=_nameLabelFontSize;
@property(nonatomic) double nameLineHeight; // @synthesize nameLineHeight=_nameLineHeight;
@property(nonatomic) double headImgTopOffset; // @synthesize headImgTopOffset=_headImgTopOffset;
@property(nonatomic) struct UIEdgeInsets emoticonMarginInsets; // @synthesize emoticonMarginInsets=_emoticonMarginInsets;
@property(nonatomic) struct UIEdgeInsets contentMarginInsets; // @synthesize contentMarginInsets=_contentMarginInsets;
- (id)init;

@end

