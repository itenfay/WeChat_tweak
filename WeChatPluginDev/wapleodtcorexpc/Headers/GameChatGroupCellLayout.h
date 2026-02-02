//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GameChatGroupCellLayout
{
    int _maxCondtionNumLine;
    int _maxTagNumLine;
    GCLabelDynamicLayout *_topLabelConfig;
    GCLabelDynamicLayout *_secondaryLabelConfig;
    GCLabelDynamicLayout *_onlyLabelConfig;
    GCLabelDynamicLayout *_pinLabelConfig;
    double _onlyLabelMargin;
    double _spaceBetweenTickLabel;
    GCLabelDynamicLayout *_rightBtnConfig;
    double _rightBtnAdditionSpace;
    double _tagLandSpace;
    double _tagVerticalSpace;
    double _labelSpace;
    double _conditionContainerSpace;
    double _addtionalConditonSpace;
    double _tagImgStrMargin;
    double _conditionTagSpace;
    GCLabelDynamicLayout *_tagLabelConfig;
    double _tagLineHeight;
    double _imgViewHeight;
    double _moreHeightWhenHasTag;
    double _bulletMsgViewHeight;
    struct CGSize _conditionTickSize;
    struct CGSize _tagImgSize;
    struct UIEdgeInsets _tagInsets;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double bulletMsgViewHeight; // @synthesize bulletMsgViewHeight=_bulletMsgViewHeight;
@property(nonatomic) double moreHeightWhenHasTag; // @synthesize moreHeightWhenHasTag=_moreHeightWhenHasTag;
@property(nonatomic) double imgViewHeight; // @synthesize imgViewHeight=_imgViewHeight;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double tagLineHeight; // @synthesize tagLineHeight=_tagLineHeight;
@property(retain, nonatomic) GCLabelDynamicLayout *tagLabelConfig; // @synthesize tagLabelConfig=_tagLabelConfig;
@property(nonatomic) struct UIEdgeInsets tagInsets; // @synthesize tagInsets=_tagInsets;
@property(nonatomic) double conditionTagSpace; // @synthesize conditionTagSpace=_conditionTagSpace;
@property(nonatomic) double tagImgStrMargin; // @synthesize tagImgStrMargin=_tagImgStrMargin;
@property(nonatomic) struct CGSize tagImgSize; // @synthesize tagImgSize=_tagImgSize;
@property(nonatomic) int maxTagNumLine; // @synthesize maxTagNumLine=_maxTagNumLine;
@property(nonatomic) int maxCondtionNumLine; // @synthesize maxCondtionNumLine=_maxCondtionNumLine;
@property(nonatomic) double addtionalConditonSpace; // @synthesize addtionalConditonSpace=_addtionalConditonSpace;
@property(nonatomic) double conditionContainerSpace; // @synthesize conditionContainerSpace=_conditionContainerSpace;
@property(nonatomic) double labelSpace; // @synthesize labelSpace=_labelSpace;
@property(nonatomic) double tagVerticalSpace; // @synthesize tagVerticalSpace=_tagVerticalSpace;
@property(nonatomic) double tagLandSpace; // @synthesize tagLandSpace=_tagLandSpace;
@property(nonatomic) double rightBtnAdditionSpace; // @synthesize rightBtnAdditionSpace=_rightBtnAdditionSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *rightBtnConfig; // @synthesize rightBtnConfig=_rightBtnConfig;
@property(nonatomic) struct CGSize conditionTickSize; // @synthesize conditionTickSize=_conditionTickSize;
@property(nonatomic) double spaceBetweenTickLabel; // @synthesize spaceBetweenTickLabel=_spaceBetweenTickLabel;
@property(nonatomic) double onlyLabelMargin; // @synthesize onlyLabelMargin=_onlyLabelMargin;
@property(retain, nonatomic) GCLabelDynamicLayout *pinLabelConfig; // @synthesize pinLabelConfig=_pinLabelConfig;
@property(retain, nonatomic) GCLabelDynamicLayout *onlyLabelConfig; // @synthesize onlyLabelConfig=_onlyLabelConfig;
@property(retain, nonatomic) GCLabelDynamicLayout *secondaryLabelConfig; // @synthesize secondaryLabelConfig=_secondaryLabelConfig;
@property(retain, nonatomic) GCLabelDynamicLayout *topLabelConfig; // @synthesize topLabelConfig=_topLabelConfig;
- (id)init;

@end

