//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MMCompatibleCGI
{
    unsigned int _uiCgi;
    unsigned int _cgiType;
    NSString *_pbUniqueID;
    NSData *_pbRequestData;
    NSData *_pbResponseData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cgiType; // @synthesize cgiType=_cgiType;
@property(nonatomic) unsigned int uiCgi; // @synthesize uiCgi=_uiCgi;
@property(retain, nonatomic) NSData *pbResponseData; // @synthesize pbResponseData=_pbResponseData;
@property(retain, nonatomic) NSData *pbRequestData; // @synthesize pbRequestData=_pbRequestData;
@property(retain, nonatomic) NSString *pbUniqueID; // @synthesize pbUniqueID=_pbUniqueID;

@end

