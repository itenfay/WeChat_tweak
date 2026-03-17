//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QOverseaProvider;

@interface QWorldTileOverlayCustomProvider : NSObject
{
    QOverseaProvider *_userProvider;
}

@property(retain, nonatomic) QOverseaProvider *userProvider; // @synthesize userProvider=_userProvider;
- (void)resetDataWithConfig:(id)arg1;
- (void)onStyleChanged:(unsigned long long)arg1;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;
- (id)init;

@end

