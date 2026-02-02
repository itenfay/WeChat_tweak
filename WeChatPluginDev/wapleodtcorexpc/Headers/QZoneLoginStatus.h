//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol QZoneLoginStatusDelegate;

@interface QZoneLoginStatus
{
    id <QZoneLoginStatusDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QZoneLoginStatusDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getQZoneLoginStatusUrl:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

