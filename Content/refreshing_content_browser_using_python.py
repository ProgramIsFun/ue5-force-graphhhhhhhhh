asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()

# Define the paths to scan, my folder is '/Game/Developers/SumTB'
paths_to_scan = ['/Game']

# Call the scan_paths_synchronous method to scan the paths
asset_registry.scan_paths_synchronous(paths_to_scan, force_rescan=True, ignore_deny_list_scan_filters=False)