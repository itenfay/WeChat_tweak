//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString;

@interface WCFinderGetWechatHDHeadFetcher : NSObject
{
    _Bool _allowNormalImg;
    unsigned int _uiDownloadEventID;
    NSString *_username;
    CContact *_contact;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(nonatomic) _Bool allowNormalImg; // @synthesize allowNormalImg=_allowNormalImg;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned int uiDownloadEventID; // @synthesize uiDownloadEventID=_uiDownloadEventID;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)updateHDHead;
- (void)downloadHDImg;
- (void)fetchWithCompletion:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)fetch;
- (void)dealloc;
- (id)initWithNormalImageIfHDNotFound:(_Bool)arg1;

@end

