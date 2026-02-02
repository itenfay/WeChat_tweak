//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMComponentData;

@interface MMComponent : UIView
{
    MMComponentData *_componentData;
}

+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMComponentData *m_componentData; // @synthesize m_componentData=_componentData;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)configContentLayout;
- (void)updateWithComData:(id)arg1;
- (id)initWithComData:(id)arg1;

@end

