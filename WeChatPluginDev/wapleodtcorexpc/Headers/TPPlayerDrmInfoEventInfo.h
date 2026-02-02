//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TPPlayerDrmParams;

@interface TPPlayerDrmInfoEventInfo : NSObject
{
    TPPlayerDrmParams *_drmParams;
}

@property(retain, nonatomic) TPPlayerDrmParams *drmParams; // @synthesize drmParams=_drmParams;
- (id)init;

@end

