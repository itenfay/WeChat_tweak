//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMImageActionSnsShareItem
{
    _Bool _isFromFav;
    unsigned int _favLocalId;
    NSString *_noteId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromFav; // @synthesize isFromFav=_isFromFav;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId=_favLocalId;
@property(retain, nonatomic) NSString *noteId; // @synthesize noteId=_noteId;
- (void)handleWithImage;
- (id)init;

@end

