//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GroupMember : NSObject
{
    NSString *m_nsMemberName;
    unsigned int m_uiMemberStatus;
    NSString *m_nsNickName;
    NSString *m_nsFullPY;
    unsigned int m_uiSex;
    NSString *m_nsRemark;
    NSString *m_nsRemarkShortPY;
    NSString *m_nsRemarkFullPY;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsRemarkFullPY; // @synthesize m_nsRemarkFullPY;
@property(retain, nonatomic) NSString *m_nsRemarkShortPY; // @synthesize m_nsRemarkShortPY;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(retain, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(nonatomic) unsigned int m_uiMemberStatus; // @synthesize m_uiMemberStatus;
@property(retain, nonatomic) NSString *m_nsMemberName; // @synthesize m_nsMemberName;
- (id)description;
- (id)init;

@end

