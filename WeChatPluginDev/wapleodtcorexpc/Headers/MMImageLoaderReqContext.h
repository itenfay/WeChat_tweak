//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMHevcHelper, NSMutableDictionary, NSURL;

@interface MMImageLoaderReqContext : NSObject
{
    _Bool _isRetry;
    _Bool _isDownLoadHevc;
    _Bool _isReqHevc;
    _Bool _isPreload;
    _Bool _isOpenBlankMonitor;
    unsigned int _imgType;
    unsigned int _hevcIdKeyID;
    unsigned int _hevcKvStatId;
    unsigned int _posInTL;
    NSURL *_imgUrl;
    unsigned long long _fromType;
    NSMutableDictionary *_extraInfo;
    MMHevcHelper *_hevcHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMHevcHelper *hevcHelper; // @synthesize hevcHelper=_hevcHelper;
@property(readonly, nonatomic) unsigned int posInTL; // @synthesize posInTL=_posInTL;
@property(readonly, nonatomic) _Bool isOpenBlankMonitor; // @synthesize isOpenBlankMonitor=_isOpenBlankMonitor;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) _Bool isReqHevc; // @synthesize isReqHevc=_isReqHevc;
@property(nonatomic) _Bool isDownLoadHevc; // @synthesize isDownLoadHevc=_isDownLoadHevc;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) unsigned int hevcKvStatId; // @synthesize hevcKvStatId=_hevcKvStatId;
@property(nonatomic) unsigned int hevcIdKeyID; // @synthesize hevcIdKeyID=_hevcIdKeyID;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) unsigned int imgType; // @synthesize imgType=_imgType;
- (id)initWithImgType:(unsigned int)arg1 imgUrl:(id)arg2 fromType:(unsigned long long)arg3 hevcIdKeyID:(unsigned int)arg4 hevcKvStatId:(unsigned int)arg5 posInTL:(unsigned int)arg6 isOpenBlankMonitor:(_Bool)arg7;

@end

