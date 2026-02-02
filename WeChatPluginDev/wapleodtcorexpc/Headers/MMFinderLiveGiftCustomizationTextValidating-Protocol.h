//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGiftCustomizationStyleItem, NSString;

@protocol MMFinderLiveGiftCustomizationTextValidating <NSObject>
- (_Bool)isWeChatEmoticonValid:(NSString *)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (_Bool)isCharacterValid:(NSString *)arg1 atCharacterIndex:(long long)arg2 reason:(id *)arg3;
- (_Bool)isTextValid:(NSString *)arg1 transient:(_Bool)arg2 forStyle:(MMFinderLiveGiftCustomizationStyleItem *)arg3 reason:(id *)arg4;
@end

