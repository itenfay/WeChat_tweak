//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CModUserImgWrap : NSObject
{
    unsigned int m_uiImgType;
    NSData *m_dtImg;
    NSString *m_nsHDImgMD5;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(nonatomic) unsigned int m_uiImgType; // @synthesize m_uiImgType;
@property(retain, nonatomic) NSString *m_nsHDImgMD5; // @synthesize m_nsHDImgMD5;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
- (id)description;
- (id)init;

@end

