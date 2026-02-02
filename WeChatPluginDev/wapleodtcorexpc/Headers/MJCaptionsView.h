//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MJCaptionsView : UIView
{
    NSArray *_captionItems;
    map_247f78e2 _labelsByCaptionItem;
    struct CGRect _currentBounds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(nonatomic) map_247f78e2 labelsByCaptionItem; // @synthesize labelsByCaptionItem=_labelsByCaptionItem;
@property(retain, nonatomic) NSArray *captionItems; // @synthesize captionItems=_captionItems;
- (void)updateWithCaptionItems:(id)arg1;
- (void)layoutCaptionLabels;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

