//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WASyncUpdateVersionCmd
{
    unsigned int _lastVersion;
    unsigned int _launchFallbackDirectlyMinVersion;
}

@property(nonatomic) unsigned int launchFallbackDirectlyMinVersion; // @synthesize launchFallbackDirectlyMinVersion=_launchFallbackDirectlyMinVersion;
@property(nonatomic) unsigned int lastVersion; // @synthesize lastVersion=_lastVersion;
- (id)description;

@end

