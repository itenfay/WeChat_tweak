//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CDownloadVideoWrap : NSObject
{
    NSString *m_nsFromUsrName;
    NSString *m_nsToUsrName;
    unsigned int m_uiLocalID;
    long long m_n64SvrID;
    unsigned int m_uiVideoTotalLen;
    unsigned int m_uiVideoStartPos;
    NSData *m_dtVideo;
    unsigned int m_uiNetwork;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiNetwork; // @synthesize m_uiNetwork;
@property(retain, nonatomic) NSData *m_dtVideo; // @synthesize m_dtVideo;
@property(nonatomic) unsigned int m_uiVideoStartPos; // @synthesize m_uiVideoStartPos;
@property(nonatomic) unsigned int m_uiVideoTotalLen; // @synthesize m_uiVideoTotalLen;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName;
- (id)description;
- (id)init;

@end

