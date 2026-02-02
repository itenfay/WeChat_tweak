//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderUserRelationshipModel, WCFinderUserRelationshipTagLabel;

@interface WCFinderUserRelationshipTag : UIView
{
    WCFinderUserRelationshipTagLabel *_leftTagLabel;
    WCFinderUserRelationshipTagLabel *_rightTagLabel;
    WCFinderUserRelationshipModel *_model;
    struct CGSize _layoutSize;
}

+ (struct CGSize)tagSizeWithModel:(id)arg1;
+ (void)setupLeftUserTagLabel:(id)arg1 rightUserTagLabel:(id)arg2 withModel:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) WCFinderUserRelationshipModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WCFinderUserRelationshipTagLabel *rightTagLabel; // @synthesize rightTagLabel=_rightTagLabel;
@property(retain, nonatomic) WCFinderUserRelationshipTagLabel *leftTagLabel; // @synthesize leftTagLabel=_leftTagLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)shouldShowTag;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

