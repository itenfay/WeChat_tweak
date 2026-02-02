//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TPPlayerSelectTrackEndEventInfo
{
    long long _errorCode;
    long long _opaque;
}

@property(nonatomic) long long opaque; // @synthesize opaque=_opaque;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (id)init;

@end

