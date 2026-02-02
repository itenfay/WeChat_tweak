//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface __BlueDevice : NSObject
{
    unsigned int _m_deviceMode;
    NSMutableDictionary *m_channels;
    NSMutableDictionary *m_stopingChannels;
    long long _m_deviceId;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_deviceId; // @synthesize m_deviceId=_m_deviceId;
@property(nonatomic) unsigned int m_deviceMode; // @synthesize m_deviceMode=_m_deviceMode;
@property(retain, nonatomic) NSMutableDictionary *m_stopingChannels; // @synthesize m_stopingChannels;
@property(retain, nonatomic) NSMutableDictionary *m_channels; // @synthesize m_channels;
- (id)getOneChannel;
- (id)init;

@end

