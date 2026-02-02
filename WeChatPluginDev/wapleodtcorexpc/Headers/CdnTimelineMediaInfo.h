//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CdnTimelineMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    _Bool m_bSinglePic;
    _Bool m_bUseWebp;
    _Bool m_bUseVCodec;
    _Bool m_bUseWxpc;
    _Bool _m_bUseWxam;
    int m_cdnMediaType;
    NSDictionary *_customRequestHeaders;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *customRequestHeaders; // @synthesize customRequestHeaders=_customRequestHeaders;
@property(nonatomic) _Bool m_bUseWxam; // @synthesize m_bUseWxam=_m_bUseWxam;
@property(nonatomic) int m_cdnMediaType; // @synthesize m_cdnMediaType;
@property(nonatomic) _Bool m_bUseWxpc; // @synthesize m_bUseWxpc;
@property(nonatomic) _Bool m_bUseVCodec; // @synthesize m_bUseVCodec;
@property(nonatomic) _Bool m_bUseWebp; // @synthesize m_bUseWebp;
@property(nonatomic) _Bool m_bSinglePic; // @synthesize m_bSinglePic;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

