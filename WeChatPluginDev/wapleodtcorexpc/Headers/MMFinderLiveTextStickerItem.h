//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveStickerTextTemplateItem, NSString, UIColor;

@interface MMFinderLiveTextStickerItem
{
    NSString *_text;
    UIColor *_color;
    unsigned long long _style;
    MMFinderLiveStickerTextTemplateItem *_selectedTemplate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStickerTextTemplateItem *selectedTemplate; // @synthesize selectedTemplate=_selectedTemplate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createReviewSubmissionItem;
- (_Bool)isContentEqualTo:(id)arg1;
- (id)stickerAccessibilityDescriptor;
- (_Bool)isStub;
- (unsigned long long)stickerType;

@end

