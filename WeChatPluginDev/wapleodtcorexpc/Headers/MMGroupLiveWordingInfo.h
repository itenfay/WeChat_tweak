//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMGroupLiveWordingInfo : NSObject
{
    NSString *_wordingZhCN;
    NSString *_wordingZhHK;
    NSString *_wordingZhTW;
    NSString *_wordingEN;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wordingEN; // @synthesize wordingEN=_wordingEN;
@property(retain, nonatomic) NSString *wordingZhTW; // @synthesize wordingZhTW=_wordingZhTW;
@property(retain, nonatomic) NSString *wordingZhHK; // @synthesize wordingZhHK=_wordingZhHK;
@property(retain, nonatomic) NSString *wordingZhCN; // @synthesize wordingZhCN=_wordingZhCN;
- (id)currentWording;
- (id)initWithStartTipJson:(id)arg1;

@end

