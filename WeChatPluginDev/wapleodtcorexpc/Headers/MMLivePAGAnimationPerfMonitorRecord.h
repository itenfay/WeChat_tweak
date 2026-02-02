//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PAGView;

@interface MMLivePAGAnimationPerfMonitorRecord
{
}

+ (id)getMonitorPAGViewKey:(id)arg1;
@property(readonly, nonatomic) __weak PAGView *pagView;
- (id)getUniqueKey;
- (id)getRecordDesc;
- (_Bool)isAnimationValid;
- (void)parseAnimation;
- (struct CGRect)currPresentFrame;
- (id)initWithPAGView:(id)arg1;

@end

