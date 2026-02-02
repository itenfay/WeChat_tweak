//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavAudioInfo : NSObject
{
    unsigned int m_uiAudioFormat;
    unsigned int m_uiAudioID;
    unsigned int m_uiAudioDuration;
    NSString *m_nsAudioID;
    NSString *m_nsAudioPath;
    _Bool m_bEnable;
    _Bool m_bForceSpeeker;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bForceSpeeker; // @synthesize m_bForceSpeeker;
@property(nonatomic) _Bool m_bEnable; // @synthesize m_bEnable;
@property(retain, nonatomic) NSString *m_nsAudioPath; // @synthesize m_nsAudioPath;
@property(retain, nonatomic) NSString *m_nsAudioID; // @synthesize m_nsAudioID;
@property(nonatomic) unsigned int m_uiAudioDuration; // @synthesize m_uiAudioDuration;
@property(nonatomic) unsigned int m_uiAudioFormat; // @synthesize m_uiAudioFormat;
@property(nonatomic) unsigned int m_uiAudioID; // @synthesize m_uiAudioID;

@end

