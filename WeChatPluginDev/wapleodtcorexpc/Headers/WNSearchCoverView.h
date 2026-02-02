//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface WNSearchCoverView : UIView
{
    _Bool _hasSetDisplay;
    NSMutableDictionary *_coverInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *coverInfos; // @synthesize coverInfos=_coverInfos;
@property(nonatomic) _Bool hasSetDisplay; // @synthesize hasSetDisplay=_hasSetDisplay;
- (void)drawRectWith:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

