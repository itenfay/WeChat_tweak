//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ShareOpenSDKStateItem
{
    long long m_state;
    double m_progress;
}

@property(nonatomic) double m_progress; // @synthesize m_progress;
@property(nonatomic) long long m_state; // @synthesize m_state;
- (id)initWithState:(long long)arg1 progress:(double)arg2;
- (id)initWithState:(long long)arg1;

@end

