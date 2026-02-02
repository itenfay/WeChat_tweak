//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface SendTdiAuthResp
{
    NSString *_tdiExtInfo;
    NSData *_tdiAuthBuffer;
    NSData *_tdiAuthParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *tdiAuthParams; // @synthesize tdiAuthParams=_tdiAuthParams;
@property(retain, nonatomic) NSData *tdiAuthBuffer; // @synthesize tdiAuthBuffer=_tdiAuthBuffer;
@property(copy, nonatomic) NSString *tdiExtInfo; // @synthesize tdiExtInfo=_tdiExtInfo;

@end

