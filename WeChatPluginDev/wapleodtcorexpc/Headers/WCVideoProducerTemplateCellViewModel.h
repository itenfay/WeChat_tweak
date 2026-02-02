//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJVideoTemplate, NSString, UIFont;

@interface WCVideoProducerTemplateCellViewModel : NSObject
{
    _Bool isLoadMoreCell;
    _Bool _isFocused;
    _Bool _isSelected;
    _Bool _canShowProgressMaskView;
    _Bool _isChangingTemplate;
    unsigned long long initialStateForLoadMoreCell;
    MJVideoTemplate *_mjVideoTemplate;
    UIFont *_cachedTemplateNameScaledFont;
    UIFont *_cachedSelectedTemplateNameScaledFont;
    NSString *_cachedPreviewAnimFilePath;
    long long _cellType;
    long long _selectedStyle;
    long long _cellOrder;
    double _changingTemplateProgress;
}

+ (struct CGSize)cellViewSizeForType:(long long)arg1;
+ (long long)cellTypeFromId:(id)arg1;
+ (id)sectionIdForType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) double changingTemplateProgress; // @synthesize changingTemplateProgress=_changingTemplateProgress;
@property(nonatomic) _Bool isChangingTemplate; // @synthesize isChangingTemplate=_isChangingTemplate;
@property(nonatomic) _Bool canShowProgressMaskView; // @synthesize canShowProgressMaskView=_canShowProgressMaskView;
@property(nonatomic) long long cellOrder; // @synthesize cellOrder=_cellOrder;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
@property(nonatomic) long long selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NSString *cachedPreviewAnimFilePath; // @synthesize cachedPreviewAnimFilePath=_cachedPreviewAnimFilePath;
@property(retain, nonatomic) UIFont *cachedSelectedTemplateNameScaledFont; // @synthesize cachedSelectedTemplateNameScaledFont=_cachedSelectedTemplateNameScaledFont;
@property(retain, nonatomic) UIFont *cachedTemplateNameScaledFont; // @synthesize cachedTemplateNameScaledFont=_cachedTemplateNameScaledFont;
@property(retain, nonatomic) MJVideoTemplate *mjVideoTemplate; // @synthesize mjVideoTemplate=_mjVideoTemplate;
@property(nonatomic) _Bool isLoadMoreCell; // @synthesize isLoadMoreCell;
@property(nonatomic) unsigned long long initialStateForLoadMoreCell; // @synthesize initialStateForLoadMoreCell;
- (void)videoProducerViewModel:(id)arg1 changeTemplateInfo:(id)arg2 progress:(double)arg3;
- (void)videoProducerViewModel:(id)arg1 changeTemplateInfo:(id)arg2 completeSuccess:(_Bool)arg3;
- (void)videoProducerViewModel:(id)arg1 changeTemplateWillStart:(id)arg2;
- (_Bool)isCellTypeSupportedForPreviewAnimation;
- (_Bool)isCellTypeSelectable;
- (void)bindByCellView:(id)arg1;
- (id)initWithMJVideoTemplate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

