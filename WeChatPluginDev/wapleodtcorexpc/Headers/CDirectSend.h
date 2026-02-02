//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CDirectSend : NSObject
{
    unsigned char m_ucCmdID;
    unsigned char m_ucFlag;
    unsigned int m_uiSeq;
    unsigned short m_usUsrNameLen;
    NSString *m_nsUsrNameList;
    unsigned short m_usDataLen;
    NSData *m_dtData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *m_dtData; // @synthesize m_dtData;
@property(nonatomic) unsigned short m_usDataLen; // @synthesize m_usDataLen;
@property(retain, nonatomic) NSString *m_nsUsrNameList; // @synthesize m_nsUsrNameList;
@property(nonatomic) unsigned short m_usUsrNameLen; // @synthesize m_usUsrNameLen;
@property(nonatomic) unsigned int m_uiSeq; // @synthesize m_uiSeq;
@property(nonatomic) unsigned char m_ucFlag; // @synthesize m_ucFlag;
@property(nonatomic) unsigned char m_ucCmdID; // @synthesize m_ucCmdID;
- (_Bool)Decode:(id)arg1;
- (id)Encode;
- (id)init;

@end

