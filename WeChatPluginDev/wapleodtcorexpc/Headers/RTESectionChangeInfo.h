//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface RTESectionChangeInfo
{
    unsigned long long _location;
    unsigned long long _deletedLength;
    unsigned long long _insertedLength;
}

@property(nonatomic) unsigned long long insertedLength; // @synthesize insertedLength=_insertedLength;
@property(nonatomic) unsigned long long deletedLength; // @synthesize deletedLength=_deletedLength;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
- (_Bool)isValid;

@end

