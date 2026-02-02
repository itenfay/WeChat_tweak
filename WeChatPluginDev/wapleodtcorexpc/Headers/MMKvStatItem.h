//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMKvStatItem
{
    unsigned int _logId;
    NSString *_seperator;
}

- (id)description;
- (id)dictionaryRepresentation;
- (void)prepareForSerialization;

@end

