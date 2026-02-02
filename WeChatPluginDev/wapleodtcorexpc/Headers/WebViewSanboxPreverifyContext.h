//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WebViewSanboxPreverifyContext
{
    _Bool _bConfigRequestResult;
    _Bool _bNotCheckIfUrlMatchToSessionUrl;
    unsigned long long _startConfigTimeStamp;
    NSString *_mainFrameSessionId;
    NSArray *_arrConfigTagNameList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNotCheckIfUrlMatchToSessionUrl; // @synthesize bNotCheckIfUrlMatchToSessionUrl=_bNotCheckIfUrlMatchToSessionUrl;
@property(retain, nonatomic) NSArray *arrConfigTagNameList; // @synthesize arrConfigTagNameList=_arrConfigTagNameList;
@property(copy, nonatomic) NSString *mainFrameSessionId; // @synthesize mainFrameSessionId=_mainFrameSessionId;
@property(nonatomic) _Bool bConfigRequestResult; // @synthesize bConfigRequestResult=_bConfigRequestResult;
@property(nonatomic) unsigned long long startConfigTimeStamp; // @synthesize startConfigTimeStamp=_startConfigTimeStamp;

@end

