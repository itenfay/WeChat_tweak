//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString;

@interface MMListenVideoBgmListCgi
{
    int _type;
    int _businessId;
    unsigned long long _videoDuration;
    NSData *_classifyResultData;
    unsigned long long _requireMusicCount;
    NSData *_sessionBuffer;
    NSArray *_miaojianMusicIds;
    NSString *_miaojianTemplateId;
    unsigned long long _finderEnterScene;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(nonatomic) unsigned long long finderEnterScene; // @synthesize finderEnterScene=_finderEnterScene;
@property(copy, nonatomic) NSString *miaojianTemplateId; // @synthesize miaojianTemplateId=_miaojianTemplateId;
@property(retain, nonatomic) NSArray *miaojianMusicIds; // @synthesize miaojianMusicIds=_miaojianMusicIds;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long requireMusicCount; // @synthesize requireMusicCount=_requireMusicCount;
@property(retain, nonatomic) NSData *classifyResultData; // @synthesize classifyResultData=_classifyResultData;
@property(nonatomic) int businessId; // @synthesize businessId=_businessId;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)buildRequest;
- (void)start;
- (id)initWithSuccessfulBlock:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;

@end

