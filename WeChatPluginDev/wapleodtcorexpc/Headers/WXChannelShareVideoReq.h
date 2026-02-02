//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WXChannelShareVideoReq
{
    NSString *_localIdentifier;
    NSData *_extData;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *extData; // @synthesize extData=_extData;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;

@end

