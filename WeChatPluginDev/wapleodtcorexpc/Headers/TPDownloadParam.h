//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface TPDownloadParam : NSObject
{
    int _dlType;
    NSArray *_urlList;
    NSDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(nonatomic) int dlType; // @synthesize dlType=_dlType;
- (_Bool)isAdaptivePlay;
- (id)getExtraJsonInfo;
- (_Bool)isOffline;
- (_Bool)isCharge;
- (id)getPlayDefinition;
- (id)getVid;
- (id)getSavePath;
- (id)getKeyId;
- (int)getClipCount;
- (int)getClipNo;
- (id)getCdnUrls;
- (id)initWithUrlList:(id)arg1 dlType:(int)arg2 extraInfo:(id)arg3;

@end

