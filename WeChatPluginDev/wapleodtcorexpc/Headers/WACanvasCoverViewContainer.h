//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface WACanvasCoverViewContainer : UIView
{
    NSMutableDictionary *_coverViewDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *coverViewDic; // @synthesize coverViewDic=_coverViewDic;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)getChildViewsInCoverView;
- (_Bool)removeChildViewInCoverView:(unsigned int)arg1;
- (id)getChildViewInCoverView:(unsigned int)arg1;
- (_Bool)updateParentIdInCoverView:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (_Bool)insertChildViewInCoverView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

