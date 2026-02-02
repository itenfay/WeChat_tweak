//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayIdKeyRegularReporter;
@protocol WCPayPayAuthNativeCgiDelegate;

@interface WCPayPayAuthNativeCgi : NSObject
{
    unsigned int _m_scene;
    unsigned int _m_channel;
    unsigned int _m_sourceType;
    unsigned int _m_A8keyScene;
    NSString *_m_url;
    NSString *_m_sourceInfo;
    id <WCPayPayAuthNativeCgiDelegate> _m_delegate;
    WCPayIdKeyRegularReporter *_m_cgiReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayIdKeyRegularReporter *m_cgiReporter; // @synthesize m_cgiReporter=_m_cgiReporter;
@property(nonatomic) __weak id <WCPayPayAuthNativeCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int m_A8keyScene; // @synthesize m_A8keyScene=_m_A8keyScene;
@property(retain, nonatomic) NSString *m_sourceInfo; // @synthesize m_sourceInfo=_m_sourceInfo;
@property(nonatomic) unsigned int m_sourceType; // @synthesize m_sourceType=_m_sourceType;
@property(nonatomic) unsigned int m_channel; // @synthesize m_channel=_m_channel;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url=_m_url;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (void)callErrorDelegate;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

