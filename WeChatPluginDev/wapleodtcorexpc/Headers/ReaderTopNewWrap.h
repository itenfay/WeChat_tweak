//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ReaderTopNewWrap : NSObject
{
    NSString *m_nsCover;
    NSString *m_nsSquareCover;
    NSString *m_nsDigest;
    unsigned int m_uiCoverWidth;
    unsigned int m_uiCoverHeight;
    unsigned int _m_coversDisplayMode;
    NSArray *_m_coverUrls;
    NSArray *_m_picUrls;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_picUrls; // @synthesize m_picUrls=_m_picUrls;
@property(retain, nonatomic) NSArray *m_coverUrls; // @synthesize m_coverUrls=_m_coverUrls;
@property(nonatomic) unsigned int m_coversDisplayMode; // @synthesize m_coversDisplayMode=_m_coversDisplayMode;
@property(nonatomic) unsigned int m_uiCoverHeight; // @synthesize m_uiCoverHeight;
@property(nonatomic) unsigned int m_uiCoverWidth; // @synthesize m_uiCoverWidth;
@property(retain, nonatomic) NSString *m_nsDigest; // @synthesize m_nsDigest;
@property(retain, nonatomic) NSString *m_nsSquareCover; // @synthesize m_nsSquareCover;
@property(retain, nonatomic) NSString *m_nsCover; // @synthesize m_nsCover;

@end

